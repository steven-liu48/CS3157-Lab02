  - Steven Liu
  - xl2948
  - Lab 2
  - description for each part
  
The description should indicate whether your solution for the part is
working or not.  You may also want to include anything else you would
like to communicate to the grader such as extra functionalities you
implemented or how you tried to fix your non-working code.

Description:
Part 1: My code works exactly as specified in the lab.
Part 2: My code works exactly as specified in the lab.
For both parts, Run "make vtest" in each folder to use valgrind and check for memory errors.


---The valgrind result of part 1 is below--
==30548== Memcheck, a memory error detector
==30548== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==30548== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==30548== Command: ./isort
==30548== 
Please input the size of the arrays: 61 15 95 9 24 56 30 74 98 65 79 70 
9 15 24 30 56 61 65 70 74 79 95 98 
98 95 79 74 70 65 61 56 30 24 15 9 
==30548== 
==30548== HEAP SUMMARY:
==30548==     in use at exit: 0 bytes in 0 blocks
==30548==   total heap usage: 5 allocs, 5 frees, 3,216 bytes allocated
==30548== 
==30548== All heap blocks were freed -- no leaks are possible
==30548== 
==30548== For counts of detected and suppressed errors, rerun with: -v
==30548== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)


---The valgrind result of part 2 is below--
==2729== Memcheck, a memory error detector
==2729== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2729== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==2729== Command: ./twecho 123 a bc def ghij klmno pqrstu vwxyz
==2729== 
123 123
a A
bc BC
def DEF
ghij GHIJ
klmno KLMNO
pqrstu PQRSTU
vwxyz VWXYZ
==2729== 
==2729== HEAP SUMMARY:
==2729==     in use at exit: 0 bytes in 0 blocks
==2729==   total heap usage: 11 allocs, 11 frees, 2,174 bytes allocated
==2729== 
==2729== All heap blocks were freed -- no leaks are possible
==2729== 
==2729== For counts of detected and suppressed errors, rerun with: -v
==2729== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
