inpfile = open('myprog.greet', 'r')
outfile = open('myprog.bash', 'w')

for line in inpfile:
    (command, number) = line.split()
    if int(number) < 1:
        print('Compiler error, number too small')
