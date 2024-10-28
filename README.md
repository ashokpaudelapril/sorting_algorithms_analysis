# Quadratic Sorting Algorithms Performance Analysis

This project implements three quadratic sorting algorithms—**Bubble Sort**, **Selection Sort**, and **Insertion Sort**—and evaluates their performance based on the number of steps taken to sort arrays of various sizes. The project includes code for each sorting algorithm, a test file to run the algorithms, and a Python script for visualizing the performance data.

## Table of Contents

- [Overview](#overview)
- [Directory Structure](#directory-structure)
- [Setup and Compilation](#setup-and-compilation)
  - [Requirements](#requirements)
  - [Compilation](#compilation)
- [Usage](#usage)
  - [Running the Sorting Algorithms](#running-the-sorting-algorithms)
  - [Visualizing the Performance](#visualizing-the-performance)
- [Details on Visualization](#details-on-visualization)

## Overview

This project explores the complexities of quadratic sorting algorithms. Each algorithm’s performance is measured in terms of the number of steps taken to sort arrays of different sizes. The results are visualized using a Python script to help understand the time complexity of each algorithm.

### Sorting Algorithms Included:

- **Bubble Sort**: Repeatedly compares and swaps adjacent elements if they are in the wrong order.
- **Selection Sort**: Divides the array into a sorted and an unsorted region, repeatedly selecting the smallest element from the unsorted region.
- **Insertion Sort**: Builds a sorted list one element at a time by inserting each new element into its appropriate position.

## Directory Structure
```
project-root/ 
├── sorting_algorithms.h # Header file for the sorting functions
├── sorting_algorithms.cpp # Implementation of the sorting algorithms
├── main.cpp # Main test file to run and log sorting steps
├── analysis.ipynb # Python script for visualizing the performance results
├── README.md # Project documentation
```

## Setup and Compilation

### Requirements

- **C++ compiler** (e.g., `g++`)
- **Python 3.x** (for visualization)
- **Matplotlib** (Python library for plotting, install with `pip install matplotlib`)

### Compilation

To compile the C++ code, navigate to the project directory and use the following command:

```bash
g++ main.cpp sorting_algorithms.cpp -o sorting_analysis
```
This will generate an executable file named sorting_analysis.

## Usage

### Running the Sorting Algorithms

Once compiled, you can run the sorting algorithms using:

```bash
./sorting_analysis
```
This will display the number of steps taken by each sorting algorithm for various array sizes in the terminal.

## Visualizing the Performance
To visualize the performance, update the Python file visualize_sorting.py with the generated data (number of steps for each algorithm) and then run:

```bash
python3 analysis.ipynb
```

The script will generate a plot image in the ```results/``` directory, showing the performance of each algorithm.

### Details on Visualization
The visualization script scales down the step counts by dividing each by 1000 to enhance readability. It uses a logarithmic scale on the y-axis to effectively display performance differences among the sorting algorithms for larger array sizes.



