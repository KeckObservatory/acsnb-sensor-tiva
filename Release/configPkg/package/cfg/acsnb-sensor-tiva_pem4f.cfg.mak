# invoke SourceDir generated makefile for acsnb-sensor-tiva.pem4f
acsnb-sensor-tiva.pem4f: .libraries,acsnb-sensor-tiva.pem4f
.libraries,acsnb-sensor-tiva.pem4f: package/cfg/acsnb-sensor-tiva_pem4f.xdl
	$(MAKE) -f /Collections/Projects/acsnb-sensor-tiva/src/makefile.libs

clean::
	$(MAKE) -f /Collections/Projects/acsnb-sensor-tiva/src/makefile.libs clean

