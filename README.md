
to install
```mkdir build && cd build && cmake .. && make```

to run 
```../bin/RPS```

to uninstall
```cd .. && rm -rf build bin```

# Requires:
sfml (```sudo apt-get install libsfml-dev```)


g++ -c main.cpp && g++ main.o -o x.x -lsfml-graphics -lsfml-window -lsfml-system && ./x.x