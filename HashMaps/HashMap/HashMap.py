class HashMap:
    def __init__(self, size):
        self.size = size
        self.hash_map = self.__create_buckets()

    def __create_buckets(self):
        return [[] for _ in range(self.size)]
    
    def __find_key(self, key):
        #use hash function to get index
        index = hash(key) % self.size

        #list of kv pairs in corresponding index
        bucket = self.hash_map[index]

        #search for already existing key in bucket
        found = False
        found_index = 0

        for i, (record_key, _) in enumerate(bucket):
            if record_key == key:
                found = True
                found_index = i
                break

        return found, bucket, found_index
    
    def set_value(self, key, value):
        found, bucket, index = self.__find_key(key)

        if found:
            #update existing kv pair with new value
            bucket[index] = (key, value)
        else:
            #add new kv pair to bucket
            bucket.append((key, value))
    
    def get_value(self, key):
        found, bucket, index = self.__find_key(key)

        if found:
            _, value = bucket[index]
            return value
        else:
            return "key not found"
    
    def delete(self, key):
        found, bucket, index = self.__find_key(key)

        if found:
            #delete record
            bucket.pop(index)
        return
    
    def get_keys(self):
        keys = []

        for bucket in self.hash_map:
            for key, _ in bucket:
                keys.append(key)

        return keys
    
    def get_values(self):
        values = []
        
        for bucket in self.hash_map:
            for _, value in bucket:
                values.append(value)

        return values
    
    def get_items(self):
        items = []
        
        for bucket in self.hash_map:
            for kv in bucket:
                items.append(kv)

        return items