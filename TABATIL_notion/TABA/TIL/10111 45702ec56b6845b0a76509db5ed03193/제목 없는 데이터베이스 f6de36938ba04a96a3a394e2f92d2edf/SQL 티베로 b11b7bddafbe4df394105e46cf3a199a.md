# SQL > 티베로

티베로

CREATE TABLE s_region

(id  NUMBER(7)

name VARCHAR(10)

DESC s_region;

DROP TABLE s_region

제약조건을 추가하려고 한다.

CREATE TABLE s_region(

id  NUMBER(7),

name VARCHAR2(50)

CONSTRANTS s_region NOT NULL,

CONSTRANTS s_id_pk PRIMARY KEY(id),

)

CREATE TABLE s_region(

id  NUMBER(7)  PRIMARY KEY,

name VARCHAR2(50)

)

CREATE TABLE s_dept(

deptno NUMBER(2),

dname VARCHAR2(14),

loc VARCHAR2(14)

CONSTRANT s_dept_key NUMBER(7) PRIMARY KEY)

INSTERT INTO S_DEPT_VALUES (10, ‘ACCOUNTING’, ‘NEW YORK’)

select * from s_dept;

INSERT 

SELECT * 

SELECT DEPTNO

SELECT * FROM s_dept;

S_EMP

CREATE TABLE S_EMP(

CONSTRANT EMPNO NUMBER(4)  PRIMARYKEY,

CONSTRANT ENAME VARCHAR2(10) NOT NULL,

JOB VARCHAR2(9),

MGR NUMBER(4),

HIREDATE DATE(),

SAL NUMBER(7),

COMM NUMBER(7),

CONSTRANT DEPTNO NUMBER(2) PRIMARYKEY);

enpno NUMBER(7) CONSTRANT s_empno_nn NOT NULL

ename VARCHAR2(10) CONSTRANT s_emp_ename_nn NOT NULL

constraints s_emp_id_pk PRIMARY KEY(empno),

constraints s_emp_mgr_fk 

→ 

긁고 붙인다.

INSERT INTO 테이블에 값을 넣겠다.

칼럼 순서대로 넣는다.

pdf파일

- DESC 테이블 보기
- 칼럼이름 파일이름 설정 제약조건을 확인할수 있다. 플러스 인덱스 정보 포함

VIEW

인덱스와 프라이머리 키의 차이점은 널이 가능한건 인덱스 프라이머리 키는 유일성이 있다

….