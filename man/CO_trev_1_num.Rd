% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/RcppExports.R
\name{CO_trev_1_num}
\alias{CO_trev_1_num}
\title{Function to calculate a statistical feature}
\usage{
CO_trev_1_num(x)
}
\arguments{
\item{x}{a numerical time-series input vector}
}
\value{
scalar value that denotes the calculated time-series statistic
}
\description{
Function to calculate a statistical feature
}
\examples{
x <- stats::rnorm(100)
outs <- CO_trev_1_num(x)

}
\author{
Carl H. Lubba
}
