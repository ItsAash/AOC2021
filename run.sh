# Cleaning
echo "Cleaning..."
rm -rf build

echo "Making Directory"
mkdir build

echo "Generating Makefile"
cmake -S . -B ./build

echo "Changing directory"
cd build

echo "Making excutable"
make

echo "Running the executable"
./bin/AOC2021