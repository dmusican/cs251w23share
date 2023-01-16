# No side effects
def remove_last(lst):
    result = lst[:-1]
    x = 0
    x = x + 1     # not side effect; local, no one
                  # can see them
    return result

# These do have side effects

count = 0
def remove_first_directly(lst):
    global count
    count = count + 1   # side effect
    lst.pop()           # side effect
    print("Working")    # side effect
    return None

thing = [9,8,7,6]

remove_first_directly(thing)
print(thing)

# Advantages....
# With side effects, you might do this
list1 = [3,2,1]
list2 = list1

# ... millions of lines of code happen
list2.sort()
print("list 1:", list1)

# Without side effects
list1 = [3,2,1]
list2 = list1

list1 = sorted(list1)
print(list1)
print(list2)

# Huge help with parallel programming
# Avoids non-deterministic code like this
x = 3

def doit():
    set x to 8

def doit2():
    set x to 10

do_in_parallel(doit1, doit2)
