#include <iostream>
using namespace std;
void menu()
{
	cout << "Enter your task number: " << endl;
	cout << "Press (1) to Add new patient." << endl;
	cout << "Press (2) to search or edit." << endl;
	cout << "Press (3) to see the list of patients." << endl;
	cout << "Press (4) to delete a record." << endl;
}
#include<ctime>
int main()
{
	char Ogen[1000], ser, Egen[1000], edit, bill;
	int task, opd = 0, emer = 0, yes, OTotalC[100], OTotalD[100], OTotalR[100], day, month, year, OroomN, EroomN, EBsize = 0;
	int  ETotalC[100] = {}, ETotalD[100] = {}, ETotalR[100] = {}, Eid[1000] = {}, Oid[1000] = {}, Esize = 0, OBsize = 0, OBill[1000];
	int  Oroom[1000], Eroom[1000], Ede[1000], Ode[1000], Eage[1000], Oage[1000], Osize = 0, OroomCh[6], EroomCh[6], EBill[1000];
	srand(time(NULL));
	cout << "                                                 ****************" << endl;
	cout << "                                                 <<  Hospital  >>" << endl;
	cout << "                                                 << Management >>" << endl;
	cout << "                                                 <<   System   >>" << endl;
	cout << "                                                 <<     By     >>" << endl;
	cout << "                                                 <<  Taha Asif >>" << endl;
	cout << "                                                 ****************" << endl;
	cout << "Enter Current Date." << endl;
	cout << "********************" << endl;
	cout << "Enter Day: "; cin >> day;
	while (day < 1 || day>31)
	{
		cout << "Invalid Input." << endl;
		cout << "Enter Day: "; cin >> day;
	}
	cout << "Enter Month: "; cin >> month;
	while (month < 1 || month>12)
	{
		cout << "Invalid Input." << endl;
		cout << "Enter month: "; cin >> month;
	}
	cout << "Enter Year: "; cin >> year;
	while (year > 3000||year<2000)
	{
		cout << "Invalid Input." << endl;
		cout << "Enter Year: "; cin >> year;
	}
	cout << "____________________" << endl;
	do
	{
		cout << endl;
		yes = 3;

		menu();

		cin >> task;
		cout << endl;

		if (task == 1)//To add patient.
		{
			cout << "Where you want add the patient." << endl;
			cout << "Press (D) for OPD" << endl;
			cout << "Press (M) for Emergency" << endl;
			cin >> ser;
			cout << endl;
			while (ser != 'm' && ser != 'M' && ser != 'D' && ser != 'd')
			{
				cout << "Invalid input" << endl;
				cout << "Where you want add the patient." << endl;
				cout << "Press (D) for OPD" << endl;
				cout << "Press (M) for Emergency" << endl;
				cin >> ser;
			}
			if (ser == 'd' || ser == 'D')//To add patient in OPD
			{
				int i = 0;
				while (yes != 0 || yes == 1)
				{

					Oid[i] = i + 1;
					cout << "Patient id: " << Oid[i] << endl;
					cout << "patient disease id No.: "; cin >> Ode[i];
					cout << "patient age: "; cin >> Oage[i];
					cout << "patient gender (m/f): "; cin >> Ogen[i];
					while (Ogen[i] != 'm' && Ogen[i] != 'M' && Ogen[i] != 'f' && Ogen[i] != 'F')
					{
						cout << "Invalid input add patient gender (m/f): "; cin >> Ogen[i];
					}
					cout << "Choose room number from following room number(1,2,3,4,5)" << endl;
					for (int i = 1; i < 6; i++)
					{
						OroomCh[i] = rand() % 100;
						cout << i << ") " << OroomCh[i] << endl;
					}
					cin >> OroomN;
					while (OroomN != 1 && OroomN != 5 && OroomN != 2 && OroomN != 3 && OroomN != 4)
					{
						cout << "Invalid Inout Choose correct room number from following rooms numbers(1,2,3,4,5)" << endl;
						cin >> OroomN;
						Oroom[i] = OroomCh[OroomN];
					}
					Oroom[i] = OroomCh[OroomN];
					cout << "Room no.: " << Oroom[i] << endl;
					cout << "press (0) to choose your task." << endl;
					cout << "Press (1) to continue Adding patients in OPD." << endl;
					cin >> yes;
					while (yes != 0 && yes != 1)
					{
						cout << "Invalid Input" << endl;
						cout << "press (0) to choose your task." << endl;
						cout << "Press (1) to continue Adding patients in OPD." << endl;
						cin >> yes;
					}
					i++;
					Osize++;
				}
			}
			if (ser == 'm' || ser == 'M')//To add patient in Emergency
			{
				int j = 0;
				while (yes != 0 || yes == 1)
				{

					Eid[j] = j + 1;
					cout << "Patient id: " << Eid[j] << endl;
					cout << "patient disease id No.: "; cin >> Ede[j];
					cout << "patient age: "; cin >> Eage[j];
					cout << "patient gender (m/f): "; cin >> Egen[j];
					while (Egen[j] != 'm' && Egen[j] != 'M' && Egen[j] != 'f' && Egen[j] != 'F')
					{
						cout << "Invalid input add patient gender (m/f): "; cin >> Egen[j];
					}
					cout << "Choose room number from following room number(1,2,3,4,5)" << endl;
					for (int i = 1; i < 6; i++)
					{
						EroomCh[i] = rand() % 100;
						cout << i << ") " << EroomCh[i] << endl;
					}
					cin >> EroomN;
					while (EroomN != 1 && EroomN != 5 && EroomN != 2 && EroomN != 3 && EroomN != 4)
					{
						cout << "Invalid Inout Choose correct room number from following rooms numbers(1,2,3,4,5)" << endl;
						cin >> EroomN;
						Eroom[j] = EroomCh[EroomN];
					}
					Eroom[j] = EroomCh[EroomN];
					cout << "Bed no.: " << Eroom[j] << endl;

					cout << "press (0) to Choose your task. " << endl;
					cout << "Press (1) to continue adding patient in Emergency." << endl;
					cin >> yes;
					while (yes != 0 && yes != 1)
					{
						cout << "Invalid Input" << endl;
						cout << "press (0) to choose your task." << endl;
						cout << "Press (1) to continue Adding patients in OPD." << endl;
						cin >> yes;
					}
					j++;
					Esize++;
				}
			}

		}
		cout << endl;
		if (task == 2)//To search or Edit
		{
			cout << "From where you want to 'Search' and 'Edit' the patient record." << endl;
			cout << "Press (D) for OPD" << endl;
			cout << "Press (M) for Emergency" << endl;
			cin >> ser;
			while (ser != 'm' && ser != 'M' && ser != 'D' && ser != 'd')
			{
				cout << "Invalid input" << endl;
				cout << "From where you want to 'Search' and 'Edit' the patient record." << endl;
				cout << "Press (D) for OPD" << endl;
				cout << "Press (M) for Emergency" << endl;
				cin >> ser;
			}
			cout << endl;
			if (ser == 'd' || ser == 'D')//To search or Edit in OPD
			{
				while (yes != 0)
				{
					cout << "Enter patient id: "; cin >> opd;
					opd -= 1;
					if (opd < Osize && opd >= 0 && Oid[opd] != -8)
					{
						cout << "Patient admitted date: " << day << "-" << month << "-" << year << endl;
						cout << "patient disease id No.: " << Ode[opd] << endl;
						cout << "patient age: " << Oage[opd] << endl;
						cout << "patient gender (m/f): " << Ogen[opd] << endl;
						cout << "Room no.: " << Oroom[opd] << endl;
						cout << "press (F) to see the financial or Record press (x) to continue.";
						cin >> bill;
						cout << endl;
						while (bill != 'f' && bill != 'F' && bill != 'x' && bill != 'X')
						{
							cout << "Invalid input." << endl;
							cout << "press (F) to see the financial or Record press (x) to continue."; cin >> bill;
						}
						if (bill == 'f' || bill == 'F')
						{
							if (OBill[opd]==opd)
							{
								cout << "Patient's total cost: " << OTotalC[opd] << endl;
								cout << "Patient's total deposited cost: " << OTotalD[opd] << endl;
								cout << "Patient's total amount returned: " << OTotalR[opd] << endl << endl;
								cout << "Press (E) to edit record." << endl;
								cout << "Press (0) to Choose your task." << endl;
								cin >> ser;
							}
							else
							{
								cout << "Financial Record of respected ID is not been added." << endl;
								cout << "Go to Edit Record to add the financial details of the patient." << endl << endl;
								cout << "Press (E) to Edit Record." << endl;
								cout << "Press (0) to Choose your task." << endl;
								cin >> ser;
							}
						}
						cout << endl;
						if (bill == 'x' || bill == 'X')
						{
							cout << "Press (E) to edit record." << endl;
							cout << "Press (0) to Choose your task." << endl;
							cin >> ser;
						}
						cout << endl;
						if (ser == 'e' || ser == 'E')//To Edit in OPD
						{
							cout << "Choose what you want to edit." << endl;
							cout << "Press (D) to edit Disease id No." << endl;
							cout << "Press (A) to edit Age." << endl;
							cout << "Press (G) to edit Gender." << endl;
							cout << "Press (R) to edit Room No." << endl;
							cout << "Press (B) to ADD or edit billing details." << endl;
							cin >> edit;
							if (edit == 'D' || edit == 'd')
							{
								cout << "Enter patient's Disease id No.: "; cin >> Ode[opd];
								cout << "Record updated successfully." << endl;
								yes = 0;
							}
							if (edit == 'A' || edit == 'a')
							{
								cout << "Enter patient's Age: "; cin >> Oage[opd];
								cout << "Record updated successfully." << endl;
								yes = 0;
							}
							if (edit == 'G' || edit == 'g')
							{
								cout << "Enter patient's gender(m/f): "; cin >> Ogen[opd];
								while (Ogen[opd] != 'm' && Ogen[opd] != 'M' && Ogen[opd] != 'f' && Ogen[opd] != 'F')
								{
									cout << "Invalid input add patient gender (m/f): "; cin >> Ogen[opd];
								}
								cout << "Record updated successfully." << endl;
								yes = 0;
							}
							if (edit == 'R' || edit == 'r')
							{
								cout << "Enter patient's room No.: "; cin >> Oroom[opd];
								cout << "Record updated successfully." << endl;
								yes = 0;
							}
							if (edit == 'B' || edit == 'b')
							{
								cout << "Enter patient's total cost: "; cin >> OTotalC[opd];
								cout << "Enter patient's total deposited cost: "; cin >> OTotalD[opd];
								OTotalR[opd] = OTotalD[opd] - OTotalC[opd];
								cout << "Patient's total amount returned: " << OTotalR[opd] << endl;
								cout << "Record updated successfully." << endl;
								OBill[opd] = opd;
								OBsize++;
								yes = 0;
							}
							if (edit != 'D' && edit != 'A' && edit != 'G' && edit != 'R' && edit != 'd' && edit != 'a' && edit != 'g' && edit != 'r' && edit != 'B' && edit != 'b')
							{
								cout << "Invalid input press 'S' to Search again."; cin >> edit;
							}
						}
						else
						{
							yes = 0;
						}
					}
					if (opd >= Osize || opd < 0 || Oid[opd] == -8)
					{
						cout << "Invalid id no record present for this id. " << endl;
						yes = 0;
					}
				}
			}

			if (ser == 'm' || ser == 'M')//To search or Edit in Emergency
			{
				while (yes != 0)
				{
					cout << "Enter patient id: "; cin >> emer;
					emer -= 1;
					if (emer < Esize && emer >= 0 && Eid[emer] != -8)
					{
						cout << "Patient admitted date: " << day << "-" << month << "-" << year << endl;
						cout << "patient disease id No.: " << Ede[emer] << endl;
						cout << "patient age: " << Eage[emer] << endl;
						cout << "patient gender (m/f): " << Egen[emer] << endl;
						cout << "Bed no.: " << Eroom[emer] << endl;
						cout << "press (F) to see the financial Record (x)."; cin >> bill;
						cout << endl;
						while (bill != 'f' && bill != 'F' && bill != 'x' && bill != 'X')
						{
							cout << "Invalid input." << endl;
							cout << "press (F) to see the financial or Record press (x) to continue."; cin >> bill;
						}
						if (bill == 'f' || bill == 'F')
						{
							if (EBill[emer] == emer)
							{
								cout << "Patient's total cost: " << ETotalC[emer] << endl;
								cout << "Patient's total deposited cost: " << ETotalD[emer] << endl;
								cout << "Patient's total amount returned: " << ETotalR[emer] << endl;
								cout << "Press (E) to edit record." << endl;
								cout << "Press (0) to Choose your task." << endl;
								cin >> ser;
							}
							else
							{
								cout << "Financial Record of respected ID is not been added." << endl;
								cout << "Go to Edit Record to add the financial details of the patient." << endl;
								cout << "Press (E) to Edit Record." << endl;
								cout << "Press (0) to Choose your task." << endl;
								cin >> ser;
							}
						}

						if (bill == 'x' || bill == 'X')
						{
							cout << "Press (E) to edit record." << endl;
							cout << "Press (0) to Choose your task." << endl;
							cin >> ser;
						}
						cout << endl;
						
						if (ser == 'e' || ser == 'E')
						{
							cout << "Choose what you want to edit." << endl;
							cout << "Press (D) to edit Disease id No." << endl;
							cout << "Press (A) to edit Age." << endl;
							cout << "Press (G) to edit Gender." << endl;
							cout << "Press (R) to edit Room No." << endl;
							cout << "Press (B) to ADD or edit billing details." << endl;
							cin >> edit;
							if (edit == 'D' || edit == 'd')
							{
								cout << "Enter patient's Disease id No.: "; cin >> Ede[emer];
								cout << "Record updated successfully." << endl;
								yes = 0;
							}
							if (edit == 'A' || edit == 'a')
							{
								cout << "Enter patient's Age: "; cin >> Eage[emer];
								cout << "Record updated successfully." << endl;
								yes = 0;
							}
							if (edit == 'G' || edit == 'g')
							{
								cout << "Enter patient's gender(m/f): "; cin >> Egen[emer];
								while (Egen[emer] != 'm' && Egen[emer] != 'M' && Egen[emer] != 'f' && Egen[emer] != 'F')
								{
									cout << "Invalid input add patient gender (m/f): "; cin >> Egen[emer];
								}
								cout << "Record updated successfully." << endl;
								yes = 0;
							}
							if (edit == 'R' || edit == 'r')
							{
								cout << "Enter patient's room No.: "; cin >> Eroom[emer];
								cout << "Record updated successfully." << endl;
								yes = 0;
							}
							if (edit == 'B' || edit == 'b')
							{
								cout << "Enter patient's total cost: "; cin >> ETotalC[emer];
								cout << "Enter patient's total deposited cost: "; cin >> ETotalD[emer];
								ETotalR[emer] = ETotalD[emer] - ETotalC[emer];
								cout << "Patient's total amount returned: " << ETotalR[emer] << endl;
								cout << "Record updated successfully." << endl;
								EBill[emer] = emer;
								EBsize++;
								yes = 0;
							}
							if (ser != 'D' && ser != 'A' && ser != 'G' && ser != 'R' && ser != 'd' && ser != 'a' && ser != 'g' && ser != 'r' && edit != 'B' && edit != 'b')
							{
								cout << "Invalid input please choose the right option for edit."; cin >> edit;
							}
						}
						else
						{
							yes = 0;
						}
					}
					if (emer >= Esize || emer < 0 || Eid[emer] == -8)
					{
						cout << "Invalid id no record present for this id. " << endl;
						yes = 0;
					}
				}
			}

		}
		if (task == 3)
		{
			cout << "Choose from which service you want to see the list of patients." << endl;
			cout << "Press (D) for OPD" << endl;
			cout << "Press (M) for Emergency" << endl;
			cin >> ser;
			while (ser != 'm' && ser != 'M' && ser != 'D' && ser != 'd')
			{
				cout << "Invalid input" << endl;
				cout << "Choose from which service you want to see the list of patients." << endl;
				cout << "Press (D) for OPD" << endl;
				cout << "Press (M) for Emergency" << endl;
				cin >> ser;
			}
			cout << endl;
			if (ser == 'D' || ser == 'd')
			{
				cout << "Press (F) to see the list of OPD patients with there financial record." << endl;
				cout << "Press (X) to see the list of OPD patients without there financial record." << endl;
				cin >> bill;
				while (bill != 'f' && bill != 'F' && bill != 'x' && bill != 'X')
				{
					cout << "Invalid Input." << endl;
					cout << "Press (F) to see the list of OPD patients with there financial record." << endl;
					cout << "Press (X) to see the list of OPD patients without there financial record." << endl;
					cin >> bill;
				}
				if (bill == 'f' || bill == 'F')
				{
					if (Osize >= 1)
					{
						while (yes != 0)
						{
							cout << "  List Of O.P.D patients with Financial Records." << endl;
							cout << "-------------------------------------------------" << endl;
							for (int i = 0; i < Osize; i++)
							{
								if (Oid[i] != -8)
								{
									cout << "patient id: " << Oid[i] << endl;
									cout << "Patient admitted date: " << day << "-" << month << "-" << year << endl;
									cout << "patient disease id No.: " << Ode[i] << endl;
									cout << "patient age: " << Oage[i] << endl;
									cout << "patient gender (m/f): " << Ogen[i] << endl;
									cout << "Room no.: " << Oroom[i] << endl;
									if (OBill[i] == i)
									{
										cout << "Patient's total cost: " << OTotalC[i] << endl;
										cout << "Patient's total deposited cost: " << OTotalD[i] << endl;
										cout << "Patient's total amount returned: " << OTotalR[i] << endl;
									}
									else
									{
										cout << "This Patient has no finencial record" << endl;
									}
									cout << ".................................................." << endl;
									cout << endl;
								}
							}
							yes = 0;
						}
					}

					if (Osize < 1)
					{
						cout << "Nothing to show in the list." << endl;
						yes = 0;
					}
				}
				if (bill == 'x' || bill == 'X')
				{
					if (Osize >= 1)
					{
						while (yes != 0)
						{
							cout << "  List Of O.P.D patients without Financial Records." << endl;
							cout << "----------------------------------------------------" << endl;
							for (int i = 0; i < Osize; i++)
							{
								if (Oid[i] != -8)
								{
									cout << "patient id: " << Oid[i] << endl;
									cout << "Patient admitted date: " << day << "-" << month << "-" << year << endl;
									cout << "patient disease id No.: " << Ode[i] << endl;
									cout << "patient age: " << Oage[i] << endl;
									cout << "patient gender (m/f): " << Ogen[i] << endl;
									cout << "Room no.: " << Oroom[i] << endl;
									
									cout << ".................................................." << endl;
									cout << endl;
								}
							}
							yes = 0;
						}
					}

					if (Osize < 1)
					{
						cout << "Nothing to show in the list." << endl;
						yes = 0;
					}
				}
			}
			if (ser == 'M' || ser == 'm')
			{
				cout << "Press (F) to see the list of Emergency patients with there financial record." << endl;
				cout << "Press (X) to see the list of Emergency patients without there financial record." << endl;
				cin >> bill;
				while (bill != 'f' && bill != 'F' && bill != 'x' && bill != 'X')
				{
					cout << "Invalid Input." << endl;
					cout << "Press (F) to see the list of Emergency patients with there financial record." << endl;
					cout << "Press (X) to see the list of Emergency patients without there financial record." << endl;
					cin >> bill;
				}
				if (bill == 'f' || bill == 'F')
				{
					if (Esize >= 1)
					{
						while (yes != 0)
						{
							cout << "  List Of Emergency with Financial Records patients" << endl;
							cout << "----------------------------------------------------" << endl;
							for (int i = 0; i < Esize; i++)
							{
								if (Eid[i] != -8)
								{
									cout << "Enter patient id: " << i << endl;
									cout << "Patient admitted date: " << day << "-" << month << "-" << year << endl;
									cout << "patient disease id No.: " << Ede[i] << endl;
									cout << "patient age: " << Eage[i] << endl;
									cout << "patient gender (m/f): " << Egen[i] << endl;
									cout << "Bed no.: " << Eroom[i] << endl;
									if (EBill[i] == i)
									{
										cout << "Patient's total cost: " << ETotalC[i] << endl;
										cout << "Patient's total deposited cost: " << ETotalD[i] << endl;
										cout << "Patient's total amount returned: " << ETotalR[i] << endl;
									}
									else
									{
										cout << "This Patient has no finencial record" << endl;
									}
									cout << ".................................................." << endl;
									cout << endl;
								}
								yes = 0;
							}
						}
					}

					if (Esize < 1)
					{
						cout << "Nothing to show in the list." << endl;
						yes = 0;
					}
				}
				if (bill == 'x' || bill == 'X')
				{
					if (Osize >= 1)
					{
						while (yes != 0)
						{
							cout << "  List Of Emergency patients without Financial Records." << endl;
							cout << "--------------------------------------------------------" << endl;
							for (int i = 0; i < Esize; i++)
							{
								if (Oid[i] != -8)
								{
									cout << "patient id: " << Eid[i] << endl;
									cout << "Patient admitted date: " << day << "-" << month << "-" << year << endl;
									cout << "patient disease id No.: " << Ede[i] << endl;
									cout << "patient age: " << Eage[i] << endl;
									cout << "patient gender (m/f): " << Egen[i] << endl;
									cout << "Room no.: " << Eroom[i] << endl;
									/*if (OBill[i] == i)
									{
										cout << "Patient's total cost: " << OTotalC[i] << endl;
										cout << "Patient's total deposited cost: " << OTotalD[i] << endl;
										cout << "Patient's total amount returned: " << OTotalR[i] << endl;
									}
									else
									{
										cout << "This Patient has no finencial record" << endl;
									}*/
									cout << ".................................................." << endl;
									cout << endl;
								}
							}
							yes = 0;
						}
					}

					if (Esize < 1)
					{
						cout << "Nothing to show in the list." << endl;
						yes = 0;
					}
				}
			}
		}
		if (task == 4)
		{
			cout << "From where you want to 'Delete' the patient record." << endl;
			cout << "Press (D) for OPD" << endl;
			cout << "Press (M) for Emergency" << endl;
			cin >> ser;
			cout << endl;
			if (ser == 'D' || ser == 'd')
			{
				while (yes != 0)
				{
					cout << "Enter patient id: "; cin >> opd;
					opd -= 1;
					if (opd < Osize)
					{
						Oid[opd] = -8;
						Ode[opd] = -8;
						Oage[opd] = -8;
						Ogen[opd] = -8;
						Oroom[opd] = -8;
						OTotalC[opd] = -8;
						OTotalD[opd] = -8;
						OTotalR[opd] = -8;
						cout << "Record Deleted successfully." << endl;
						yes = 0;
					}
					if (opd >= Osize)
					{
						cout << "Invalid id no record present for this id. " << endl;
						yes = 0;
					}
				}
			}
			if (ser == 'M' || ser == 'm')
			{
				while (yes != 0)
				{
					cout << "Enter patient id: "; cin >> emer;
					emer -= 1;
					if (emer < Esize)
					{
						Eid[emer] = -8;
						Ede[emer] = -8;
						Eage[emer] = -8;
						Egen[emer] = -8;
						Eroom[emer] = -8;
						ETotalC[emer] = -8;
						ETotalD[emer] = -8;
						ETotalR[emer] = -8;
						cout << "Record Deleted successfully." << endl;
						yes = 0;
					}
					if (opd >= Osize)
					{
						cout << "Invalid id no record present for this id. " << endl;
						yes = 0;
					}
				}
			}
		}
		if (task != 1 && task != 2 && task != 3 && task != 4)
		{
			cout << "Invalid input please choose the right option." << endl;
			yes = 0;
		}
	} while (yes == 0);



	return 0;
}
