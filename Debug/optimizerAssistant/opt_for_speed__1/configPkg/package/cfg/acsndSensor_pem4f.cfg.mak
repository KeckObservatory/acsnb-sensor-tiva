# invoke SourceDir generated makefile for acsndSensor.pem4f
acsndSensor.pem4f: .libraries,acsndSensor.pem4f
.libraries,acsndSensor.pem4f: package/cfg/acsndSensor_pem4f.xdl
	$(MAKE) -f C:\Users\scetre\workspace6_1\acsndSensor/src/makefile.libs

clean::
	$(MAKE) -f C:\Users\scetre\workspace6_1\acsndSensor/src/makefile.libs clean

