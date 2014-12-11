program foo;
var
	i : integer;
	a : integer;
	q : real;
	p : real;
begin
	i := 3 + 1;
    a := i+1;
    q := 3.14 * 1.0;
    p := q * 10.0;

    a := (q = 1.0);
    a := (1<4);
    a := (1.3 > 3);
    a := (2 <> 2.3333);
    a := not(1=2);
    a := -2345;
    q := -p;

end.
