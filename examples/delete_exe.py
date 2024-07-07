import os

try:
    files = os.listdir()
except:
    print("Couldn't read the files")

exe_files = []
for file in files:
    if file.endswith(".exe"):
        exe_files.append(file)

if len(file):
    for file in exe_files:
        print("Removing file :", file)
        os.remove(file)
    print("\nAll exe files successfully cleared!")
else:
    print("No exe file found!")
