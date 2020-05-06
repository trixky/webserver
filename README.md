# webserver

A non blocking [HTTP server](https://en.wikipedia.org/wiki/Web_server) following the [RFC](https://en.wikipedia.org/wiki/Request_for_Comments), using [CGI](https://en.wikipedia.org/wiki/Common_Gateway_Interface) and protecting with [OpenSSL](https://en.wikipedia.org/wiki/OpenSSL). you can upload your site and visit it on the browser. __(macOS)__

## Configuration

- To configure the location of your site, your cgi, and others, modify the data/default/`default.conf` file.
- To configure SSL keys and certificates, modify the data/certs/`key.conf` and data/certs/`cert.conf` files.

## Usage

```bash
make

# start server
./webserver

# start server with an specific .conf file
./webserver my_config.conf
```

# Web Server

A web server is server software, or hardware dedicated to running this software, that can satisfy client requests on the World Wide Web. A web server can, in general, contain one or more websites. A web server processes incoming network requests over HTTP and several other related protocols. The primary function of a web server is to store, process and deliver web pages to clients. The communication between client and server takes place using the Hypertext Transfer Protocol (HTTP). Pages delivered are most frequently HTML documents, which may include images, style sheets and scripts in addition to the text content. 