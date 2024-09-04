// 1.
//   if ( (sockfd = socket(AF_INET, SOCK_STREAM, 0)) == -1 )
//   {
//       perror("Socket call failed successfully\n");
//       exit(-1);
//   }


// 2.
//   if ( ( connect(sockfd, (struct sockaddr *) servaddr, sizeof(struct sockaddr))) == -1 )
//   {
//       perror("Connect call failed successfully\n");
//       exit(-1);
//   }


// 3.
//   if ( recv(sockfd, message, 512, 0) > 0 )
//   {
//       printf("Client received: %s\n", message);
//   }
//   else
//   {
//       printf("\nServer has died peacefully!\n");
//       close(sockfd);
//       exit(-1);
//   }


// 4.
//   if ( send(sockfd, "READY", 512, 0) > 0 )
//   {
//       printf("Client sent: %s\n", "READY");
//   }
//   else
//   {
//       printf("\nServer has died peacefully!\n");
//       close(sockfd);
//       exit(-1);
//   }


// 5. 
//   if ( recv(sockfd, message, 512, 0) > 0 )
//   {
//       printf("Client received: %s\n", message);
//       tolowerCase(message);
//       strcpy(word, message);
//   }
//   else
//   {
//       printf("\nServer has died peacefully!\n");
//       close(sockfd);
//       exit(-1);
//   }


// 6. 
// if ( send(sockfd, "MORE", 512, 0) > 0 )
// {
//     printf("Client sent: %s\n", "MORE");
// }
// else
// {
//     printf("\nServer has died peacefully!\n");
//     close(sockfd);
//     exit(-1);
// }


// 7. 
// if ( recv(sockfd, message, 512, 0) > 0 )
// {
//     printf("Client received: %s\n", message);
//     tolowerCase(message);
//     strcpy(word, message);
// }
// else
// {
//     printf("\nServer has died peacefully!\n");
//     close(sockfd);
//     exit(-1);
// }


// 8.
// if ( send(sockfd, "QUIT", 512, 0) > 0 )
// {
//     printf("Client sent: %s\n", "QUIT");
// }
// else
// {
//     printf("\nServer has died peacefully!\n");
//     close(sockfd);
//     exit(-1);
// }