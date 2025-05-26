dna_sequence=input()

max_count=0
curr_count=1
for i in range(len(dna_sequence)-1):
    if(dna_sequence[i]==dna_sequence[i+1]):
        curr_count+=1
    else:
        if(max_count<curr_count):
            max_count=curr_count
        curr_count=1
if(max_count<curr_count):
    max_count=curr_count
print(max_count)