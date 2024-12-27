const boxes = document.querySelectorAll(".box");
        const resetBtn = document.querySelector("#reset-btn");
        const newGameBtn = document.querySelector("#new-btn");
        const msgContainer = document.querySelector(".msg-container");
        const msg = document.querySelector("#msg");

        let isPlayerTurn = true;
        const winPattern = [
            [0, 1, 2],
            [3, 4, 5],
            [6, 7, 8],
            [0, 3, 6],
            [1, 4, 7],
            [2, 5, 8],
            [0, 4, 8],
            [2, 4, 6]
        ];

        const resetGame = () => {
            isPlayerTurn = true;
            msgContainer.classList.add("hide");
            boxes.forEach(box => {
                box.innerText = "";
                box.disabled = false;
                box.style.pointerEvents = "auto";
            });
        };

        const disableBoxes = () => {
            boxes.forEach(box => {
                box.disabled = true;
            });
        };

        const checkWinner = () => {
            for (const pattern of winPattern) {
                const [a, b, c] = pattern;
                if (
                    boxes[a].innerText &&
                    boxes[a].innerText === boxes[b].innerText &&
                    boxes[b].innerText === boxes[c].innerText
                ) {
                    showWinner(boxes[a].innerText);
                    return true;
                }
            }

            // Check for a draw
            if ([...boxes].every(box => box.innerText !== "")) {
                msg.innerText = "It's a Draw!";
                msgContainer.classList.remove("hide");
                return true;
            }
            return false;
        };

        const showWinner = (winner) => {
            msg.innerText = `Congratulations, ${winner} wins!`;
            msgContainer.classList.remove("hide");
            disableBoxes();
        };

        const computerMove = () => {
            const availableBoxes = [...boxes].filter(box => box.innerText === "");
            if (availableBoxes.length > 0) {
                const randomBox = availableBoxes[Math.floor(Math.random() * availableBoxes.length)];
                randomBox.innerText = "X";
                randomBox.style.pointerEvents = "none";
                if (!checkWinner()) {
                    isPlayerTurn = true;
                }
            }
        };

        boxes.forEach((box, index) => {
            box.addEventListener("click", () => {
                if (isPlayerTurn) {
                    box.innerText = "O";
                    box.style.pointerEvents = "none";
                    if (!checkWinner()) {
                        isPlayerTurn = false;
                        setTimeout(computerMove, 500); // Delay for computer move
                    }
                }
            });
        });

        resetBtn.addEventListener("click", resetGame);
        newGameBtn.addEventListener("click", resetGame);