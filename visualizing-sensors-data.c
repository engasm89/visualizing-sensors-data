#include <stdio.h> // Include I/O for data visualization output
#include <unistd.h> // Include POSIX sleep for timing

// Simulated sensor readings
static int temp_c = 24; // Temperature in Celsius
static int hum_pct = 50; // Humidity percentage
static int press_hpa = 1013; // Pressure in hPa

// Entry generating CSV and JSON frames
int main(void) { // Begin main function
  printf("Visualizing Sensors Data\n"); // Title output
  for (int i = 0; i < 6; ++i) { // Loop to emit frames
    temp_c += 1; // Increment temperature
    hum_pct -= 1; // Decrement humidity
    press_hpa += (i % 2 ? 1 : -1); // Oscillate pressure
    printf("CSV,%d,%d,%d\n", temp_c, hum_pct, press_hpa); // Print CSV line
    printf("JSON,{\"temp\":%d,\"hum\":%d,\"press\":%d}\n", temp_c, hum_pct, press_hpa); // Print JSON line
    usleep(400000); // Delay 400 ms between frames
  } // End loop
  return 0; // Exit success
} // End main

