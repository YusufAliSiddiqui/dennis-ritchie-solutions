echo "These are the files than will be deleted"

find . -name "*~" -type f
num=0
num=$(find . -name "*~" -type f | wc -l)

echo "Are you sure you want to delete $num files? [yn]"

read ans

if [ $ans == y ]; then
	find . -name "*~" -type f -delete
	echo "$num swap files have been deleted"
else
	echo "Aborted"
fi
