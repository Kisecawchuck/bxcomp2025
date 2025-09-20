for i in $(seq 11)
do
    ./canal < ./IN/$i.in > ./OUT/$i.out
done
