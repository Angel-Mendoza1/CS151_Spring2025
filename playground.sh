#!/bin/bash

FOLDER="Playground/"

if [ -d "$FOLDER" ]; then
    echo "Folder exists"
else
    mkdir $FOLDER
fi

cd $FOLDER

# ./playground.sh