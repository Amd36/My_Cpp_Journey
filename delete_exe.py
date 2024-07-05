import os

try:
    files = os.listdir()
except:
    print("Couldn't read the files")

exe_files = []
for file in files:
    if file.endswith(".exe"):
        exe_files.append(file)

for file in exe_files:
    os.remove(file)

print("All exe files successfully cleared!")