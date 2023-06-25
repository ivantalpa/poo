# Use an official GCC runtime as a parent image
FROM gcc:latest

# Set /bin/bash as the default shell
SHELL ["/bin/bash", "-c"]

# Ensure the working directory exists
RUN mkdir -p /exercises

# Set the working directory to /exercises
WORKDIR /exercises

# Keep the container running
CMD tail -f /dev/null
