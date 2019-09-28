#!/bin/sh

path=$1
main()
{
	files=$(ls | grep -v *.sh)
	if [ $# -eq 0 ];
		then
			for filename in $files
			do
			cd $filename; make $path ; cd ../
			done
		fi
}
main



