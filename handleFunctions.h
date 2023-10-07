float tdsValue = 0;

void handleRoot()
{
 server.send(200, "text/html", webpageCode); // Gli manda la pagina
}
//---------------------------------------
void handlePOT()
{
 String POTval = String(tdsValue);
 server.send(200, "text/plain", POTval); // Gli manda la lettura
}