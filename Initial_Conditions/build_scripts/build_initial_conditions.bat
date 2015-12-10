g++ -O3 -march=native -mfpmath=sse -malign-double -ffast-math -Wall ../source/main.cpp ../source/ode.cpp ../source/misc.cpp ../../Radiation_Model/source/element.cpp ../../Radiation_Model/source/radiation.cpp ../../Radiation_Model/source/OpticallyThick/OpticallyThickIon.cpp ../../Resources/source/file.cpp ../../Resources/source/fitpoly.cpp -o ../../Initial_Conditions.exe