# BSQ  Find_Biggest_Square

The aim of this project is to generate maps of walls 'o' and free cases '.', then find the bigest square in it.

# Compilation

Compilation via Makefile

      make                                             # compile all the files .c
      
      make clean                                       # remove all the files .o
      
      make fclean                                      # remove all the files .o and the executable file

# Usage

      ./bsq [number] "..o..o."                         \with the generator\
                  (random pattern)

      ./bsq [path to the map.txt]                      \with a created map\
