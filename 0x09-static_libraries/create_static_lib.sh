#!/bin/bash

gcc -c *.c
ar -rs liball.a *.o
ranlib liball.a
