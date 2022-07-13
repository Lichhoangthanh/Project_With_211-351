FROM ubuntu

LABEL author="Lisa Rubanova 211-331"

RUN apt-get update
RUN apt-get install g++ -y

WORKDIR /root/
RUN mkdir MyProj_Rubanova
WORKDIR /root/MyProj_Rubanova/
COPY *.cpp /root/MyProj_Rubanova/
COPY *.h /root/MyProj_Rubanova/
COPY *.txt /root/MyProj_Rubanova/

RUN g++ -o myProgram main.cpp myfile.cpp

ENTRYPOINT  ["./myProgram"]