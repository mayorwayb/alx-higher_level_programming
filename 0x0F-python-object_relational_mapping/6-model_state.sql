CREATE DATABASE IF NOT EXISTS hbtn_0e_6_usa;

USE hbtn_0e_6_usa;

CREATE TABLE IF NOT EXISTS states (
    id INT AUTO_INCREMENT PRIMARY KEY,
    name VARCHAR(255) NOT NULL
);

INSERT INTO states (name) VALUES ('California'), ('Texas'), ('New York');
