#!/bin/bash
echo "Content-type: text/html"
echo ""
echo "<html>"
echo "<head>"
echo "<title>"
echo Project 4
echo "</title>"
echo "</head>"
echo "<body>"
regex="e=(.)"
[[ $QUERY_STRING =~ $regex ]]

Condition=${BASH_REMATCH[1]}

if [ $Condition == 'a' ]; 
then
	echo "<h1> RAINBOW </h1>"


elif [ $Condition == 'b' ]; 
then
	echo "<h1> BLUE  </h1>"

elif [ $Condition == 'r' ]; 
then
	echo "<h1> RED </h1>"


elif [ $Condition == 'g' ]; 
then
	echo "<h1> GREEN </h1>"


elif [ $Condition == 's' ]; 
then
	echo "<h1> BEEP </h1>"
fi

sudo chmod 666 /dev/ttyACM0
sudo gcc serial.c
#./a.out b
./a.out ${BASH_REMATCH[1]}
#echo b >> /dev/ttyACM0 2> error.txt
echo "</body>"
echo "</html>"
