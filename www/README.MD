ECEN_5273 PA2

Instructions:
1. Unpack the tarball to desired directory
2. cd to 'www' directory
3. Run the command './webserver <port_no>' to start webserver
4. From a web browser type in the URL 'http://localhost:<port_no>' to access the webserver's default page
5. To access other files on the webserver type in the path name after port_no.
   1. Example - 'http://localhost:<port_no>/path_to_file'
6. To stop server press 'CTRL+C'

Explanations:

The source code for the webserver can be found in the file httpechosrv.c

The code works in the following way.
1. First create a socket to listening for incoming connections
2. Accept incoming connections
3. For each new connection create a new thread
4. Each thread calls a function 'void service_http_request(int connfd)'
5. 'void service_http_request(int connfd)' does the following
6. The http request is parsed. The following information is extracted
   1. request method
   2. request URI
   3. request version
   4. hostname
   5. keep-alive
7. If the requested URI is present in webserver file system, build the appropriate header and send it first.
8. Then read the file into buffer and send it in packets of size MAXLINE
9. Pipelining is implemented using select() function call and setting a timeout of 10s.
10. In the event of error, HTTP error 500 is returned by the webserver
11. POST not implemented