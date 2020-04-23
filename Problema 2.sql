select C.name as curso, YEAR(C.start_date) as 'Año de inicio', avg(E.score) as Promedio, stdev(E.score) as Desviación, max(E.score) as NotaMax, min(E.score) as NotaMin
FROM exams EX INNER JOIN evaluations E on E.exam_fk = EX.pk
INNER JOIN students S on E.student_fk = S.pk
INNER JOIN courses C on EX.course_fk = C.pk
group by C.name,YEAR(C.start_date);

/* otra forma es realizar a traves de ",":

select C.name as curso, YEAR(C.start_date) as 'Año de inicio', avg(E.score) as promedio, stdev(E.score) as Desviación, max(E.score) as NotaMax, min(E.score) as NotaMin
FROM evaluations E,students S,exams EX,courses C
where E.exam_fk = EX.pk
and E.student_fk = S.pk
and EX.course_fk = C.pk
group by C.name,C.start_date;

*/