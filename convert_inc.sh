#!binbash

for directory in datamaps ; do
	pory_exists=$(find $directory -name $scripts.pory  wc -l)
	if [[ $pory_exists -eq 0 ]]; 
	then
		inc_exists=$(find $directory -name $scripts.inc  wc -l)
		if [[ $inc_exists -ne 0 ]]; 
		then
			echo Converting $directoryscripts.inc
			touch $directoryscripts.pory
			echo 'raw `'  $directoryscripts.pory
			cat $directoryscripts.inc  $directoryscripts.pory
			echo '`'  $directoryscripts.pory
		fi
	fi 	
done