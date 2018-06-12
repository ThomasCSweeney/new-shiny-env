NUM_FILES=0
files="$1/*"
for file in $files
do
	NUM_FILES=$(($NUM_FILES+1))
done
echo "$NUM_FILES"
