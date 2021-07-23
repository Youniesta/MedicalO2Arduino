# MedicalO2Arduino
Arduino codes and docs for using O2 medical sensors
# Datasheet
[KE-25_KE-50_DataSheet.pdf](https://github.com/MakerLabCRI/MedicalO2SensorsArduino/files/6415594/KE-25_KE-50_DataSheet.pdf)

# Schematic
![Circuit](https://user-images.githubusercontent.com/47628329/126790159-1b4f24de-4318-4b4f-b2cd-765bafbb3e7a.png)

# Graph between KE-50 oxygen sensor and O2 multimeter
On this graph, we can see the curves of the O2 sensor KE-50 and the O2 multimeter CY-12C before and after they receive a O2 pulse of 1 second.
After the pulse, we see the curve of the O2 multimeter decrease while the one for the O2 sensor KE-50 do not decrease yet because of an air exchange smaller than 200-300ml per minute. **Sensors should be used under conditions where the air exchange is greater than 200-300ml per minute in order to obtain the response speed as specified in the response time graph on the datasheet.** 
![Circuit](https://user-images.githubusercontent.com/47628329/126789857-70864322-3154-44a4-9fbf-b9beda1bb88d.png)
