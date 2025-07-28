from PIL import Image
import math, os

#🔍 get dictionary of all grey levels and number of pixels
def get_values_dict(image_path):
    image = Image.open(image_path).convert("L")
    width, height = image.size
    
    #initialise empty dictionary
    values = {}
    
    #iterate through array x,y -> get l value
    for x in range(width):
        for y in range (height):
            g = image.getpixel((x,y))

            #if l value in dict inc(++), else append with value 1
            if g in values:
                values[g] += 1
            else:
                values[g] = 1

    return values

#📝 calculate number of spaces required based on number of digits (for formatting purposes)
def spaces(number):
    if number == 0:
        spaces = 1
    else:
        digits = math.log10(number) + 1
        spaces = math.floor(digits)
    return spaces

#📝 string formatting of each line
def formatting(l_value, number):
    return f"{l_value}{" "*(13-spaces(l_value))}| {number}{" "*(6-spaces(number))}| {"■"*number}"

#🖨️ display histogram on terminal
def print_histogram(values_dict, full_range=False):
    #x axis - keys (rgb value) -> print values from 0 to 255
    #y axis - values (number of pixels) -> print asterisk for each ?
    
    #for i in range (256) -> get each value
    #format example:
    # GRAY LEVEL   NUMBER OF PIXELS
    # 0            | 7     | ■■■■■■■

    print("GRAY LEVEL   NUMBER OF PIXELS")
    for i in range (256):
        if i in values_dict:
            number = values_dict[i]
            print(formatting(i, number))
        else:
            number = 0
            if full_range:
                print(formatting(i, number))

#🧪 for testing purposes
dir = os.path.dirname(__file__)
path = os.path.join(dir, "image.png")

values_dict = get_values_dict(path)
print_histogram(values_dict)