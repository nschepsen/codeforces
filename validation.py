from sys import argv, exit
from os  import listdir, path, rename, system

def main():

    if len(argv) != 3:    
        exit('Usage: python3 %s validation <TASK> <TEST>' % (argv[0])) 
  
    print(system("./bin/T0455A"))

  
  
if __name__ == "__main__": 
    main()