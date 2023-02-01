import sys
inpfile = open('myprog.greet', 'r')

for line in inpfile:
    (command, number) = line.split()
    if int(number) < 1:
        print('Interpreter error, number too small')
        sys.exit()
    outfile.write('for i in {1..' + number + '}\n')
    outfile.write('do\n')
    outfile.write('    echo ' + command + '\n')
    outfile.write('done\n')

inpfile.close()
outfile.close()
