for i in $(seq 25)
do
    diff --strip-trailing-cr ./OUT/$i.out ./ANS/$i.ans
done
