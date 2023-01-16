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
