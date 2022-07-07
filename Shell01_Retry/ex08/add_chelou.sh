NB1=$(echo $FT_NBR1 | sed 'y/'\''\\"?!/01234/')
NB2=$(echo $FT_NBR2 | tr 'mrdoc' '01234')
SOMME=$(echo "obase=13; ibase=5; $NB1+$NB2" | bc)
echo $SOMME | tr '0123456789ABC' 'gtaio luSnemf'
