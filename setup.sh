#!/bin/bash

echo "Setting up Git hooks..."

if [ -d "hooks" ]; then
  mv hooks/* .git/hooks/
  chmod +x .git/hooks/*
  echo "All hooks from the hooks folder have been installed."
  rm -r hooks
else
  echo "Error: hooks directory is missing. Please check your setup."
fi

SCRIPT_NAME=$(basename "$0")
rm -- "$SCRIPT_NAME"
