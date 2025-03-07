Sorting Performance Analysis

This project generates a large dataset of random numbers, sorts them using an external sorting program, and records execution time to analyze performance.
Files and Functionality

    generate.cpp: A C++ program that generates a file (numbers.dat) containing a specified number of random integers within a given range.
        Usage: ./generate <count> <min> <max>
        Example: ./generate 1000000 1 1000000 (Generates 1,000,000 random numbers between 1 and 1,000,000)

    mysort.exe: An external sorting executable that sorts the generated numbers. This file is assumed to be a precompiled sorting program.

    sortrace.sh: A shell script that:
        Calls generate to create the dataset.
        Runs mysort.exe to sort the data.
        Measures the execution time to analyze sorting performance.

Usage

To run the full pipeline:

chmod +x sortrace.sh
./sortrace.sh <count> <min> <max>

Example:

./sortrace.sh 1000000 1 1000000

This will generate a dataset, sort it, and display the execution time.
Purpose

This project is useful for:

    Benchmarking sorting algorithms.
    Analyzing execution time based on dataset size and range.
    Understanding external sorting performance in real-world scenarios.
