MODULE DrivePoint;

  IMPORT
    Console, Point;
	
(*PROCEDURE Do*; *)
  VAR
	p,q: Point.Instance;

BEGIN
  p := Point.New(1,2);
  q := Point.New(2,1);
  Console.WriteString(p.ToString() + " + " + q.ToString() + " = " + p.Add(q).ToString());
  Console.WriteLn;
  Console.WriteString("p.x:> "); Console.WriteInt(p.x);
  Console.WriteLn;
  Console.WriteString("p.y:> "); Console.WriteInt(p.y);
  Console.WriteLn
(* END Do; *)

END DrivePoint.
