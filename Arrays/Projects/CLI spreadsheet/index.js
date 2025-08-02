#! usr/bin/env node
import { Command } from 'commander';
const program = new Command()

program
    .name('') //<- name of entire program
    .description('') //<- description of program

program.command('')
    .description //<- written description of command
    .argument //<- required params (necessary data)
    .option // <- optional params (optional flags)
    .action() //<- where func goes

program.parse();