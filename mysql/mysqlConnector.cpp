#include <jdbc/cppconn/driver.h>
#include <jdbc/cppconn/exception.h>
#include <jdbc/cppconn/resultset.h>
#include <jdbc/cppconn/statement.h>
#include <stdlib.h>

#include <iostream>

#include "jdbc/mysql_connection.h"

using namespace std;

sql::Connection* get_connection(void)
{
	try
	{
		sql::Driver* driver;
		sql::Connection* con;
		sql::Statement* stmt;
		sql::ResultSet* res;

		driver = get_driver_instance();

		con = driver->connect("localhost", "root", "");

		con->setSchema("test02");

		// stmt = con->createStatement();
		// res = stmt->executeQuery("SELECT * FROM test02.test1;");
		/*while (res->next())
		{
		}*/
		delete res;
		delete stmt;
		// delete con;

		return con;
	}
	catch (sql::SQLException& e)
	{
		cout << "# ERR: SQLException in " << __FILE__;
	}

	cout << endl;

	return nullptr;
}
