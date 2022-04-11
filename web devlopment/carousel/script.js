const prev = document.getElementById("prev");
const next = document.getElementById("next");
// console.log(prev);

prev.addEventListener("click", function() {
    const currCard = document.querySelector(".card.view");
    // console.log(currCard);
    console.log(currCard.previousElementSibling);
    const prevCard = currCard.previousElementSibling ? currCard.previousElementSibling : document.querySelector(".card-container").lastElementChild;
    console.log(prevCard);
    currCard.classList.remove("view");
    prevCard.classList.add("view");
})

next.addEventListener("click", function() {
    const currCard = document.querySelector(".card.view");
    // console.log(currCard);
    let nextCard = currCard.nextElementSibling ? currCard.nextElementSibling : document.querySelector(".card-container").firstElementChild;
    console.log(nextCard);
    currCard.classList.remove("view");
    nextCard.classList.add("view");
})