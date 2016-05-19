DROP TABLE IF EXISTS "Users";
CREATE TABLE "Users" ("id" INTEGER PRIMARY KEY  NOT NULL , "username" TEXT, "password" TEXT, "role" TEXT);
INSERT INTO "Users" VALUES(1,'mehmedduhovic','bracika','admin');
INSERT INTO "Users" VALUES(2,'farismulahasanovic','faris','employee');
