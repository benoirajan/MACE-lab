7.
CREATE TABLE student(
    rollno INT PRIMARY KEY,
    NAME VARCHAR(30),
    cource VARCHAR(20),
    yea YEAR
);

INSERT INTO student
VALUES(1, 'sasi', 'Bca', '2001'),
(2, 'raju', 'Bca', '2021'),
(3, 'hashir', 'mca', '2020'),
(4, 'sukrith', 'Btech', '2020'),
(5, 'Aswanth', 'Physics', '2018')

SELECT * FROM `student`




B.
a.
CREATE TABLE Employee(
    eid INT PRIMARY KEY,
    name VARCHAR(40),
    did INT,
    salary FLOAT
);

CREATE TABLE `department`(
    `did` INT,
    `dname` VARCHAR(30),
    `dhod` INT(30),
    PRIMARY KEY(`did`)
);


b.
ALTER TABLE
    `employee` ADD FOREIGN KEY(`did`) REFERENCES department(did)


c.
