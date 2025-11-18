/*
 * Course: Visualizing Sensors Data
 * Platform: Embedded Systems
 * Author: Ashraf S A AlMadhoun
 * 
 * Description:
 * This code demonstrates the core concepts taught in the "Visualizing Sensors Data" course.
 * It provides a practical implementation that students can study, modify, and
 * use as a foundation for their own projects.
 * 
 * Learning Objectives:
 * - Understand the fundamental principles covered in this course
 * - Practice implementing the concepts with real code
 * - Build a working example that can be extended
 * 
 * Hardware Requirements:
 * - Development board (Embedded Systems)
 * - Components as specified in CIRCUIT.md
 * - USB cable for programming
 * 
 * Pin Connections:
 * Refer to CIRCUIT.md for detailed wiring diagrams and pin assignments.
 * 
 * Usage:
 * 1. Review the code structure and comments
 * 2. Connect hardware according to CIRCUIT.md
 * 3. Upload code to your development board
 * 4. Monitor serial output for debugging
 * 
 * Course Link: https://www.udemy.com/course/visualizing-sensors-data/
 * Repository: https://github.com/engasm89/visualizing-sensors-data
 * 
 * Copyright (c) 2025 Ashraf S A AlMadhoun
 * Licensed under MIT License
 */

/*
 * Course: Visualizing Sensors Data
 * Platform: Embedded Systems
 * Author: Ashraf S A AlMadhoun
 * Purpose: Auto-generated metadata block to document the learning goals.
 * Notes: Auto-generated metadata block (2025-11-18)
 */

/*
 * Course: Visualizing Sensors Data
 * Platform: Embedded Systems
 * Author: Ashraf S A AlMadhoun
 * Purpose: Auto-generated metadata block to document the learning goals.
 * Notes: Auto-generated metadata block (2025-11-18)
 */

#include <stdio.h> // Include I/O for data visualization output
#include <unistd.h> // Include POSIX sleep for timing

// Simulated sensor readings
static int temp_c = 24; // Temperature in Celsius
static int hum_pct = 50; // Humidity percentage
static int press_hpa = 1013; // Pressure in hPa

// Program entry point generating CSV and JSON frames
// Main routine: orchestrates the visualizing sensors data scenario
int main(void) { // Main function implementation function
  printf("Visualizing Sensors Data\n"); // Title output
  for (int i = 0; i < 6; ++i) { // Loop to emit frames
    temp_c += 1; // Increment temperature
    hum_pct -= 1; // Decrement humidity
    press_hpa += (i % 2 ? 1 : -1); // Oscillate pressure
    printf("CSV,%d,%d,%d\n", temp_c, hum_pct, press_hpa); // Print CSV line
    printf("JSON,{\"temp\":%d,\"hum\":%d,\"press\":%d}\n", temp_c, hum_pct, press_hpa); // Print JSON line
    usleep(400000); // Delay 400 ms between frames
  } // End loop
  return 0; // Exit successfully
} // End of main function

