import os
import json

with open('input.json') as f:
	data = json.load(f)
output = "SUCCESS"
failed = []
n =  len(data["Dependencies"])
for key in data["Dependencies"]:
	cmd = "pip install "+key+"=="+data["Dependencies"][key]
	print "Installing "+key+"=="+data["Dependencies"][key]
	result = os.popen(cmd).read()
	if "Successfully installed" not in result and "Requirement already satisfied" not in result:
		output=""
		failed.append(key)

if output=="SUCCESS":
	print output
else:
	print failed
	
