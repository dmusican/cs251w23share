import sys
inpfile = open('myprog.greet', 'r')
outfile = open('myprog.bash', 'w')

for line in inpfile:
    (command, number) = line.split()
    if int(number) < 1:
        print('Compiler error, number too small')
        sys.exit()
    outfile.write('for i in {1..' + number + '}\n')
    outfile.write('do\n')
    outfile.write('    echo ' + command + '\n')
    outfile.write('done\n')

inpfile.close()
outfile.close()
