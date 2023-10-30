$x = 3;

sub fun1 {
    # local $x = 4;
    my $x = 4;
    fun2();
}

sub fun2 {
    print "$x\n";
}

fun1();
